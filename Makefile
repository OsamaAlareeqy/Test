all: PointOfSale

PointOfSale: main.cpp database.cpp barcode_reader.cpp
	g++ -o	PointOfSale	main.cpp		database.cpp	barcode_reader.cpp
