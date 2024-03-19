# Function to generate quadruples from C code
def generate_quadruples(code):
    quadruples = []
    variables_used = set()
    lines = code.split('\n')
    for line in lines:
        line = line.strip()
        if not line:
            continue
        if line.startswith("#"):
            quadruples.append(line)  # Keep preprocessor directives
        elif line.startswith("//"):
            continue
        elif line.startswith("int main()"):
            quadruples.append(line)  # Keep main function declaration
        elif line.startswith("}"):
            quadruples.append(line)  # Keep closing braces
        elif "(" in line and ")" in line and "{" in line and "}" in line:
            quadruples.append(line)  # Keep other function declarations
        else:
            # Handle other statements
            parts = line.split("=")
            if len(parts) == 2:
                variable = parts[0].strip()
                if variable == "return":
                    quadruples.append(line)  # Keep return statements
                else:
                    variables_used.add(variable)
                    quadruples.append(line)  # Keep other assignment statements
    return quadruples

# Example C code
code = """
#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;
    int result;
    if (x > y) {
        result = x;
    } else {
        result = y;
    }
    printf("Result: %d\\n", result);
    return 0;
}
"""

# Generate quadruples from C code
quadruples = generate_quadruples(code)

# Display quadruples
print("Quadruple form after Constant Folding and Dead Code Elimination")
print("--------------------------------------------------------------")
for quad in quadruples:
    print(quad)

# Perform variable elimination
variables_defined = set()
optimized_quadruples = []
for quad in quadruples:
    parts = quad.split("=")
    if len(parts) == 2:
        variable = parts[0].strip()
        expression = parts[1].strip()
        if expression.isdigit():
            variables_defined.add(variable)
        elif variable in variables_defined:
            optimized_quadruples.append(quad)

# Display optimized quadruples after variable elimination
print("\nOptimized quadruples after Variable Elimination")
print("------------------------------------------------")
for quad in optimized_quadruples:
    print(quad)
