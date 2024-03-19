def generate_c_code(ir):
    c_code = ""
    for operation in ir:
        if operation[0] == 'declaration':
            c_code += "{} {};\n".format(operation[1], operation[2])
        elif operation[0] == 'assignment':
            c_code += "{} = {};\n".format(operation[1], operation[2])
        elif operation[0] == 'if':
            c_code += "if ({}) {{\n".format(operation[1])
        elif operation[0] == 'else':
            c_code += "}} else {{\n"
        elif operation[0] == 'print':
            c_code += "printf(\"{}\\n\", {});\n".format(operation[1], operation[2])
        elif operation[0] == 'return':
            c_code += "return {};\n".format(operation[1])
        else:
            print("Unsupported operation:", operation)
    return c_code

# Example IR
ir = [
    ('declaration', 'int', 'x'),
    ('assignment', 'x', '5'),
    ('declaration', 'int', 'y'),
    ('assignment', 'y', '10'),
    ('if', 'x > y', None),
    ('assignment', 'result', 'x'),
    ('else', None, None),
    ('assignment', 'result', 'y'),
    ('print', 'Result', 'result'),
    ('return', '0', None)
]

# Generate C code from IR
c_code = generate_c_code(ir)
print("Generated C code:")
print(c_code)
