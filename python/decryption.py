encrypt = input()

key = input()


# decrypt - forming it in a matrix
rows, cols = (int(len(encrypt)/len(key)), len(key)) 

decrypt = [[encrypt[i] for i in range(rows*j, (rows*j)+rows)] for j in range(cols)] 

# sorting the key and creating a dictionary
key_sort = sorted(key)
decrypt_dict = dict()

for i in key:
    decrypt_dict[i] = decrypt[key_sort.index(i)]

#printing out message
for j in range(rows):
    for i in key:
        print(decrypt_dict[i][j], end = "")
        
