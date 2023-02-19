# Pedir al usuario los valores de voltaje (V), resistencia (R) y corriente (I)
voltaje = float(input("Introduce el valor de voltaje (en voltios): "))
resistencia = float(input("Introduce el valor de resistencia (en ohmios): "))
intensidad = voltaje / resistencia

# Imprimir el valor de corriente
print("La corriente es de", "{:.2f}" .format(intensidad), "amperios")
