ecm = []
for i in range(607): 
    value = float(input('Enter ecm values '))
    ecm.append(value)

sig = []
for i in range(607): 
    value = float(input('Enter sig values '))
    sig.append(value)

for i in range(1, len(ecm)-1):
    DE = (((ecm[i-1]*sig[i-1]) - (2*ecm[i]*sig[i]) + (ecm[i+1]*sig[i+1]))/0.001)
    print(DE)