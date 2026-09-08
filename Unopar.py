# iniciando com uma lista vazia para armazenar as notas
l = []

# laço para solicitar quatro notas ao usuário e guardar na lista
for i in range(0,4):
  n = float(input("Qual é a nota que você quer inserir? "))
  l.append(n)

# cálculo da soma e da média
a = sum(l)
media = a / len(l)

# verificação da situação do aluno
if media >= 7:
  print(f"O aluno foi aprovado com nota {media} e suas notas foram {l}")
else:
  print(f"O aluno está reprovado com nota {media} e suas notas foram {l}")