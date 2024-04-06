numero_binario = input("Digite um número binário: ")

# Inverte a string para facilitar a iteração pelos dígitos
numero_binario = numero_binario[::-1]

numero_decimal = 0

# Itera pelos dígitos do número binário
for i in range(len(numero_binario)):
    if numero_binario[i] == '1':
        # Se o dígito for '1', adiciona 2 elevado à potência do índice atual
        numero_decimal += 2 ** i

print("O número decimal equivalente é:", numero_decimal)
