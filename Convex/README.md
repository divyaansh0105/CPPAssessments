# Convex Hull
This C++ project is designed to get Convex Hull of 2D shape. The project follows a modular structure with separate header (.h) and implementation (.cpp) files for each class.
## Getting Started
1. **Clone the Repository:**
    ```bash
    git clone https:[(
[https://github.com/Sumit-Giri/ConvexHull.git](https://github.com/divyaansh0105/CPPAssessments/tree/divyaansh0105-convex-hull/Convex))]
    ```
2. **Build the Project:**
    Open the project in your preferred C++ IDE or build using the command line.
3. **Run the Application:**
    Execute the built binary to run the application.
## Folder Structure
The project is organized into the following folders:
- **headers**: Contains header files for point, reader, shape, triangle, triangulation, writer class.
- **output**: Output contains execuatble.
- **src**: Contains implementation files corresponding to each header file.
- **main.cpp**: Main source file where the program execution starts.
## 1. Point
- Header: include/Point2D.h
- Implementation: src/Point2D.cpp
## 2. ConvexHull
- Header: include/Point3D.h
- Implementation: src/Point3D.cpp
## 3. Shape
- Header: include/Shape.h
- Implementation: src/Shape.cpp
## 4. STLReader
- Header: include/STLReader.h
- Implementation: src/STLReader.cpp
## 5. STLWriter
- Header: include/STLWriter.h
- Implementation: src/STLWriter.cpp
## 6. Triangle
- Header: include/Triangle.h
- Implementation: src/Triangle.cpp
## 7. Triangulation
- Header: include/Triangulation.h
- Implementation: src/Triangulation.cpp
### Source files content
- `Point.cpp`: Constructor, destructor & other methods are defined.
- `Point3D.cpp`: Constructor, destructor, other methods, and operator overloading are defined.
- `ConvexHull.cpp` :Constructor , destructor , other method.
- `STLReader.cpp`: Constructor, destructor & actual file reading code in method are defined.
- `STLWriter.cpp`: Constructor, destructor & actual file writing code in method are defined.
- `Triangle.cpp`: Constructor, destructor, methods for triangle vertices & normals are defined.
- `Triangulation.cpp`: Constructor, destructor, methods for triangles, unique points & unique normals are defined.
### main files content
- Objects for reader, writer & ConvexHull are created.
- Methods in reader , writer  and ConvexHull are called.
### Steps to plot geometry on gnu plot
- Copy the path of text file of shape which we have to plot.
- In gnu plot give command as `splot 'file_path' w lp` to get shape plotted.
