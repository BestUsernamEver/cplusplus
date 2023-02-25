calculator:
	g++ calculator/calc-v2.cpp -o run
	./run

gtn:
	g++ minigames/guessthatnumber/gtn.cpp -o run
	./run

rps:
	g++ minigames/rockpaperscissors/rps.cpp -o run
	./run

translate:
	g++ translator/translator.cpp -o run
	./run

sandbox:
	g++ sandbox.cpp -o run
	./run