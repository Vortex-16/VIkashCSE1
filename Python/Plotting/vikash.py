import matplotlib.pyplot as plt
import numpy as np

plt.figure(figsize=(10, 6))

# Letter V
plt.plot([0, 1, 2], [5, 0, 5], label='V')

# Letter I
plt.plot([3, 3], [0, 5])
plt.plot([2.5, 3.5], [5, 5])
plt.plot([2.5, 3.5], [0, 0], label='I')

# Letter K
plt.plot([4, 4], [0, 5])                 # vertical line
plt.plot([4, 6], [2.5, 5])               # upper diagonal
plt.plot([4, 6], [2.5, 0], label='K')    # lower diagonal

# Letter A
plt.plot([7, 8.5, 10], [0, 5, 0])        # /\ shape
plt.plot([7.7, 9.3], [2.5, 2.5], label='A')

# Letter S
t = np.linspace(0, 1, 100)
sx = 12 + np.sin(2 * np.pi * t)
sy = 3 + 2 * np.cos(np.pi * t)

plt.plot(sx, sy, linewidth=2, color="cyan", label='S')

# Letter H
plt.plot([14, 14], [0, 5])               # left vertical
plt.plot([16, 16], [0, 5])               # right vertical
plt.plot([14, 16], [2.5, 2.5], label='H') # middle bar

plt.title("VIKASH using Matplotlib")
plt.gca().set_aspect("equal")
plt.grid(True)
plt.show()
