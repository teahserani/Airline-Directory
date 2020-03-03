0:
	# 1- All Flights
	# 2- All Passangers 
	# 3- Find Flight Information
	# 4- Find Passanger Information
	# 5- Flight Tests
	# 6- Passanger Tests
	# 7- Additional Testing
1 :
	#This shows all of the Airline's Schueduled Flights 
	clang++ Flight.cpp main.cpp -o output
	./output

2:
	#This shows all of the Airline's Passangers
	clang++ Flight.cpp Passanger.cpp main1.cpp -o output
	./output
3:
	#Look Up Flight Feature
	clang++ Flight.cpp main-lookup.cpp -o output
	./output
4:
	#Look Up Passanger Feature
	clang++ Passanger.cpp Flight.cpp main1-lookup.cpp -o output
	./output

5:
	#If it is a real Flight then it will get the Flight information 
	#If it is a fake Flight then this will appear:
		#Enter Flight Number <flight_number> or 0
		#Plane Type: 
		#Traveling from  to 
		#Departs at: 0
		#Arrives at: 1
	clang++ Flight.cpp main-lookup.cpp -o output
	#Test1: Testing Real Flight 785
	./output <test1.txt>output1.txt 
	#Test2: Testing Real Flight 891
	./output <test2.txt | diff - output2.txt 
	#Test3: Testing Real Flight 991
	./output <test3.txt | diff - output3.txt
	#Test4: Testing Fake Flight 478
	./output <test4.txt | diff - output4.txt
	#Test5: Testing Fake Flight ABCD
	./output <test5.txt | diff - output5.txt
	#Test6: Testing Fake Flight 8901 
	./output <test6.txt | diff - output6.txt	
6:
	#If it is a Passanger in the System it should return the Passanger's information
	#If it is a Fake Passanger it will return this:
	#Passanger's Name:  
	#Reservation Number: <int> or 0
	#Flight Number: 0
	#Seat Number: 
	#Flighting from  to 
	#Expected Departure Time: 0
	#Expected Arrival Time: 0
	#Please arrive at the airport at:0

	clang++ Passanger.cpp Flight.cpp main1-lookup.cpp -o output
	#Resveration Number 1111 (real passanger)
	./output <test7.txt | diff -  output7.txt
	#Reservation Number 1112 (real passanger)
	./output <test8.txt | diff - output8.txt
	#Resevation Number 1113 (real passanger)
	./output <test9.txt | diff - output9.txt
	#Reseveration Number 1114 (real passanger)
	./output <test10.txt | diff - output10.txt
	#Reseveration Number 1115 (real passanger)
	./output <test11.txt | diff - output11.txt
	#Reseveration Number 0000 (fake passanger)
	./output <test12.txt | diff - output12.txt
	#Reseveration Number 23 (fake passanger)
	./output <test13.txt | diff - output13.txt
	#Reseveration Number ABCDE (fake passanger)
	./output <test14.txt | diff - output14.txt
7:

	#Testing Airport Codes 
	#
	#Airport Code Test
	#
	clang++ testmain.cpp Passanger.cpp Flight.cpp -o output
	#Airport - BOS ZAD
	./output <test15.txt | diff - output15.txt
	#Airport - DCA JBD
	./output <test16.txt | diff - output16.txt
	#Airport - JFK ADL
	./output <test17.txt | diff - output17.txt
	#Airport - HJ9 0
	./output <test18.txt | diff - output18.txt
	#Checking Airport Times 
	#
	clang++ testmain1.cpp Passanger.cpp Flight.cpp -o output
	#Airport Time- 1100
	./output <test19.txt| diff - output19.txt
	#Airport Time- 0120
	./output <test20.txt | diff - output20.txt
	#Airport Time- 1430
	./output <test21.txt | diff - output21.txt
 
