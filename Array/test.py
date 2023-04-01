
import numpy as np

def newton_divided_difference(x, y):
   
    n = len(x)
    nd = np.zeros((n, n))
    for i in range(n):
        for j in range(i):
            nd[i, j] = (y[i] - y[j]) / (x[i] - x[j])
    return nd

def newton_differentiate(x, y, order):
    nd = newton_divided_difference(x, y)
    dydx = np.zeros(len(x))
    for i in range(len(x)):
        dydx[i] = nd[i, order]
    return dydx

def main():
    """
    Example usage of the `newton_differentiate` function.
    """
    x = np.array([1, 2, 3 ,4])
    y = np.array([1, 8, 27, 64])
    dydx = newton_differentiate(x, y, 1)
    print(dydx)

if __name__ == "__main__":
    main()
