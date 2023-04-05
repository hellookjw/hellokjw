msg2 =" Welcome to seoul"
msg1 = input("input his/her name :")

def rep_char(c, n):
    print(c * n)

def draw_line_string(msg1):
    nstr = len(msg1) if (len(msg1) > len(msg2)) else len(msg2)

    rep_char('-', nstr + 9)
    print(f' Hello  {msg1}  ')
    print(msg2)
    rep_char('-', nstr + 9)
    
draw_line_string(msg1)
