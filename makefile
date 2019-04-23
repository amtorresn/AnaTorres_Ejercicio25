fig.png: data.dat
	python plot.py 

data.dat: solve.x
	./solve.x > data.dat

solve.x: solve.cpp
	c++ solve.cpp -o solve.x