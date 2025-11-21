import matplotlib.pyplot as plt
def draw_multiple_points():
    x_number_list = [1, 4, 9, 16, 25, 36, 49]
    y_number_list = [1, 2, 3, 4, 5, 6, 7]
    plt.scatter(x_number_list, y_number_list, color='red')
    plt.title('Extract Number Roots')
    plt.xlabel("Number")
    plt.ylabel("Square Roots")
    plt.show()
draw_multiple_points()