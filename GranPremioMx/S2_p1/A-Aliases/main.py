texto = str(input())

coso=texto.split(' ')

lista=[]

for i in range (1,coso[0]):
    lista=lista.append(coso[i][0])

print(lista)
