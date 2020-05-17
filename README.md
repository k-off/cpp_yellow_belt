# cpp_yellow_belt
Second course of "The art of development using modern C++" specialization. The repository contains some of the assignments.

## About the specialization
"The art of development using modern C++" is offered by [Moscow Institute of Physics and Technology](https://mipt.ru/english/), [Yandex](www.yandex.ru) and [E-Learning Development Fund](https://eldf.net) at [Coursera](www.coursera.org).
The main objective of the specialization is to provide a practical experience in the following topics:
**C++17, Testing, Debugging, STL, Algorithms, Parallel Computing, OOP, Code Refactoring**

![MIPT](https://d3njjcbhbojbot.cloudfront.net/api/utilities/v1/imageproxy/https://coursera-university-assets.s3.amazonaws.com/48/291dfd1736174fa3dc51726f58884c/logo_square400x400eng_notext_inv.png?auto=format%2Ccompress&dpr=2&w=120&h=120)  ![YANDEX](https://d3njjcbhbojbot.cloudfront.net/api/utilities/v1/imageproxy/http://coursera-university-assets.s3.amazonaws.com/aa/cae40116304b32816d2181c20c99fc/Coursera-userpic.png?auto=format%2Ccompress&dpr=2&w=120&h=120)  ![ELDF](https://d3njjcbhbojbot.cloudfront.net/api/utilities/v1/imageproxy/http://coursera-university-assets.s3.amazonaws.com/ec/b38186de2c485cb2e5ba546a16c9cb/4.png?auto=format%2Ccompress&dpr=2&w=120&h=120)

## About the course
The "Yellow Belt" course covers :
 - **function templates, tuples, pairs**
 - **unit testing, debugging**
 - **program decomposition, header files**
 - **iterators, algorithms, containers**
 - **inheritance, polymorphism**

![MIPT](yellow.png)

## Assignments
### SQR
Use function templates for different data types support.

### Testing API
Use testing API to perform unit-test of a function.

### Program Decomposition
Split the program Bus Stops from White Belt course into multiple files.

**Supported commands:**
 - `NEW_BUS bus stop_count stop1 stop2 ...` add a new route `bus` with `stop_count` stops with names `stop1, ...`
 - `BUSES_FOR_STOP stop` print out all the routes available at the stop `stop`
 - `STOPS_FOR_BUS bus` print out all the stops available for the route `bus`
 - `ALL_BUSES` print out all the routes with their stops

**Input Format:**
```
Q - number of requests
R[0] - first request
...
R[Q-1] - last request
```

**Test Input:**
```
10
ALL_BUSES
BUSES_FOR_STOP Marushkino
STOPS_FOR_BUS 32K
NEW_BUS 32 3 Tolstopaltsevo Marushkino Vnukovo
NEW_BUS 32K 6 Tolstopaltsevo Marushkino Vnukovo Peredelkino Solntsevo Skolkovo
BUSES_FOR_STOP Vnukovo
NEW_BUS 950 6 Kokoshkino Marushkino Vnukovo Peredelkino Solntsevo Troparyovo
NEW_BUS 272 4 Vnukovo Moskovsky Rumyantsevo Troparyovo
STOPS_FOR_BUS 272
ALL_BUSES
```

**Test Output:**
```
No buses
No stop
No bus
32 32K
Stop Vnukovo: 32 32K 950
Stop Moskovsky: no interchange
Stop Rumyantsevo: no interchange
Stop Troparyovo: 950
Bus 272: Vnukovo Moskovsky Rumyantsevo Troparyovo
Bus 32: Tolstopaltsevo Marushkino Vnukovo
Bus 32K: Tolstopaltsevo Marushkino Vnukovo Peredelkino Solntsevo Skolkovo
Bus 950: Kokoshkino Marushkino Vnukovo Peredelkino Solntsevo Troparyovo
```
