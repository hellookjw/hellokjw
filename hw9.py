class Rectangle:
    def __init__(self, x1, y1, x2, y2):
        self.x1 = x1  # 좌측 상단 x 좌표
        self.y1 = y1  # 좌측 상단 y 좌표
        self.x2 = x2  # 우측 하단 x 좌표
        self.y2 = y2  # 우측 하단 y 좌표

    def show(self):
        print(f"좌측 상단: ({self.x1}, {self.y1})")
        print(f"우측 하단: ({self.x2}, {self.y2})")

    def getWidth(self):
        return self.x2 - self.x1

    def getHeight(self):
        return self.y2 - self.y1

    def getArea(self):
        return self.getWidth() * self.getHeight()

    def getPerimeter(self):
        return 2 * (self.getWidth() + self.getHeight())


# 예시 사용
r1 = Rectangle(5, 5, 20, 10)
a = r1.getArea()
p = r1.getPerimeter()
r1.show()
print(f"\n넓이는 {a}, 둘레는 {p}")
