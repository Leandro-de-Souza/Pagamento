
nomes = input("Nome: ")
valor = float(input("Valor por hora: "))
horas = int(input("Horas trabalhadas: "))

pagamento = horas * valor

print(f"O pagamento para {nomes} deve ser {pagamento:.2f}")
