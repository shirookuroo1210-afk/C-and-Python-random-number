import random

angka_rahasia = random.randint(1, 100)  
tebakan = 0

print("Tebak angka 1-100!")

while True:   
    tebakan = int(input("Masukkan tebakan: "))   
    
    if tebakan == angka_rahasia:
        print(f"Benar, Angkanya {angka_rahasia}")
        break
    elif tebakan < angka_rahasia:
        print("angka terlalu kecil")   
    else:
        print("angka terlalu besar")   
#code written by lyvo
