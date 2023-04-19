def display_multiplication_table(n, k):
    for i in range(10, 1):
        for a in range(n, k, 1):
            print(f'{i} x {a} = {i * a:2d}')
            
display_multiplication_table(2, 6)
display_multiplication_table(6, 10)
