import numpy as np
import matplotlib.pylab as plt

datos=genfromtxt("datos.txt")

tiempo=datos[:,1]
altura=[:,0]

plt.plot(tiempo,altura, legend="Posicion")
plt.xlabel("Tiempo")
plt.ylabel("Altura")
plt.title("Grafica de altura contra tiempo de un objeto")
plt.legend()
plt.show()

plt.savefig("grafico.pdf")


