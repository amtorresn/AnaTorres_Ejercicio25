import os
import numpy as np
import matplotlib.pyplot as plt

a = os.system("g++ solve.cpp -o solve.x")
a = os.system("./solve.x > solve.dat")

data = np.loadtxt("solve.dat")

n = data.shape[0]//6
print(n)

t1_ex = data[0:n,0]
y1_ex = data[0:n,1]
t1_im = data[n:2*n,0]
y1_im = data[n:2*n,1]

t2_ex = data[2*n:3*n,0]
y2_ex = data[2*n:3*n,1]
t2_im = data[3*n:4*n,0]
y2_im = data[3*n:4*n,1]

t3_ex = data[4*n:5*n,0]
y3_ex = data[4*n:5*n,1]
print(y3_ex)
t3_im = data[5*n:6*n,0]
y3_im = data[5*n:6*n,1]
print(y3_im)

plt.figure(figsize=(14,4))

plt.subplot(1,3,1)
plt.title("0.1")
plt.plot(t1_ex,y1_ex, label = "Explicit")
plt.plot(t1_im, y1_im, label = "Implicit")
plt.xlabel('t')
plt.ylabel('y')
plt.legend()


plt.subplot(1,3,2)
plt.title("0.01")
plt.plot(t2_ex,y2_ex, label = "Explicit")
plt.plot(t2_im, y2_im, label = "Implicit")
plt.xlabel('t')
plt.ylabel('y')
plt.legend()

plt.subplot(1,3,3)
plt.title("1")
plt.plot(t3_ex,y3_ex, label = "Explicit")
plt.plot(t3_im, y3_im, label = "Implicit")
plt.xlabel('t')
plt.ylabel('y')
plt.legend()

plt.savefig("fig.png")
