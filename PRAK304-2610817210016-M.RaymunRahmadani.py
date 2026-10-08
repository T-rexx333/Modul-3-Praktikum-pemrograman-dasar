grade = int (input())

if grade == 0:
    print("Nol")

elif grade <= 9:
    print("Satuan")

elif grade == 100:
    print("Anda Menginput Melebihi Limit Bilangan")

elif grade <= 19:
    print("Belasan")
else:
    print("Puluhan")