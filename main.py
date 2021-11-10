import math
import time
import sys
import os


def pulisci_schermo():
    if sys.platform.startswith("win"):
        os.system("cls")
    else:
        os.system("clear")


while True:
    pulisci_schermo()
    print()
    print("ax^2 + bx + c = ?")
    print()

    a = b = c = None
    print("(Lascia vuoto per uscire dal programa!)")
    try:
        a = input("Inserisci il valore di a: ")
        a = int(a)
    except ValueError:
        if a == "":
            break
        print("Input invalido!")
        time.sleep(1)
        continue

    try:
        b = input("Inserisci il valore di b: ")
        b = int(b)
    except ValueError:
        if b == "":
            break
        print("Input invalido!")
        time.sleep(1)
        continue

    try:
        c = input("Inserisci il valore di c: ")
        c = int(c)
    except ValueError:
        if c == "":
            break
        print("Input invalido!")
        time.sleep(1)
        continue

    delta = (b ** 2) - (4 * a * c)
    print()
    print(f"{a}x^2 + {b}x + {c}:")

    if delta < 0:
        print("Questa equazione non ha soluzioni!")

    elif delta == 0:
        x = (-b) / (2 * a)
        print(f"x = {x}")

    elif delta > 0:
        x1 = (-b + math.sqrt(delta)) / (2 * a)
        x2 = (-b - math.sqrt(delta)) / (2 * a)
        print(f"x1 = {x1}")
        print(f"x2 = {x2}")

    input("Premi [INVIO] per tornare al menu.")
    continue
