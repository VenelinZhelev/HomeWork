import math

class Rectangle:
    def __init__(it, width, height):
        it.__width = width
        it.__height = height

    def get_perimeter(it):
        it.area= 2 * (it.__width + it.__height)
        return 2 * (it.__width + it.__height)
        
    def get_area(it):
        return it.__width * it.__height

    def get_rectangle(it):
        return math.sqrt((it.__width **2 + it.__height**2)/2)

    def __eq__(it, it2):
        return it.__width == it2.__width and it.__height == it2.__height

    def custom_method(it):
        return it.__width * it.area * it.__height
        
    def __init__(it2, width, height):
        it2.__width = width
        it2.__height = height

    def get_perimeter(it2):
        it2.area= 2 * (it2.__width + it2.__height)
        return 2 * (it2.__width + it2.__height)
        
    def get_area(it2):
        return it2.__width * it2.__height

    def get_rectangle(it2):
        return math.sqrt((it2.__width **2 + it2.__height**2)/2)

    def custom_method(it2):
        return it2.__width * it2.area * it2.__height
    
    def __compare__(it2, it1):
     if(it2.__width == it1.__width):
         if(it2.__height == it1.__height):
             print("They are equal")
         else:
             print("They aren't equal")
    

rectangle1 = Rectangle(3, 4)
rectangle2 = Rectangle(5, 7)

print("The area of the rectangle is:")
print(rectangle1.get_area())
      
print("The perimeter of the rectangle is")
print(rectangle1.get_perimeter())

print("The diagonal of the rectangle is:") 
print(rectangle1.get_rectangle())

print("The volume of the rectangle is")
print(rectangle1.custom_method())

print("The area of the other rectangle is:")
print(rectangle2.get_area())

print("The perimeter of the other rectangle is:")
print(rectangle2.get_perimeter())

print("The diagonal of the other rectangle is:") 
print(rectangle2.get_rectangle())

print("The volume of the other rectangle is")
print(rectangle2.custom_method())
