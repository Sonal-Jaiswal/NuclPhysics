vr_data = open('vr1.txt', 'r')
for line in vr_data: 
    if line.startswith(' Vr') == 1: 
        print(line[4:])
