#include <iostream>
#include <vector>
#include <string>
#include "./headers/geomVector.h"
#include "./headers/writer.h"
#include "./headers/matrix.h"
#include "./headers/plane.h"
int main()
{
    int choice;
    double x, x1;
    double y, y1;
    double z, z1;
    std::cout << "Enter your choice" << std::endl
              << "1. Check if two vectors are equal" << std::endl
              << "2. Find magnitude of vector" << std::endl
              << "3. Find normalized vector" << std::endl
              << "4. Set new VectorLength" << std::endl
              << "5. Add scalar value to vector" << std::endl
              << "6. Subtract scalar value from vector" << std::endl
              << "7. Multiply vector by scalar value" << std::endl
              << "8. Divide vector by a scalar value" << std::endl
              << "9. Add two vectors" << std::endl
              << "10. DotProduct of two vectors" << std::endl
              << "11. CrossProduct of two vectors" << std::endl
              << "12. Find direction Cosines of vector" << std::endl
              << "13. Multiply vector with matrix" << std::endl
              << "14. Find distance between two vectors" << std::endl
              << "15. Find distance between vector and plane" << std::endl
              << "16. Find angle between two vectors" << std::endl
              << "17. Find angle between vector and plane" << std::endl
              << "18. Find projection on vector" << std::endl
              << "19. Find projection on plane " << std::endl
              << "20. Angle between vector and axis"<<std::endl;
    std::cin >> choice;

    switch (choice)
    {
    case 1:
    {   //Check for equality of 2 vectors
        std::cout << "enter value for x, y and z" << std::endl;
        std::cin >> x >> y >> z;

        std::cout << "enter value for x, y and z" << std::endl;
        std::cin >> x1 >> y1 >> z1;

        Geometry::GeomVector a(x, y, z);
        Geometry::GeomVector b(x1, y1, z1);
        if(a==b)
        {
            std::cout<<"Two vectors are equal."<<std::endl;
        }
        else{
            std::cout<<"Two vectors are not equal."<<std::endl;
        }
    }
    break;
    case 2:
    {   
        //Magnitude of the vector is
        std::cout << "enter value for x, y and z" << std::endl;
        std::cin >> x >> y >> z;
        Geometry::GeomVector a(x, y, z);
        std::cout<<"Magnitude of two vector is "<<a.magnitude()<<std::endl;
    }
    break;

    case 3:
    {
        std::cout << "enter value for x, y and z" << std::endl;
        std::cin >> x >> y >> z;
        Geometry::GeomVector a(x, y, z);
        std::vector<Geometry::GeomVector> vectors;
        vectors.push_back(a);
        //check if magnitude is one
        Geometry::GeomVector result = a.normalize();
        vectors.push_back(result);
        Geometry::Writer writer;
        std::string filepath = "output/vector.txt";
        writer.write(filepath, vectors);
    }
    break;

    case 4:
    {   
        //Setting vector
        int newLength;
        std::cout << "enter value for x, y and z" << std::endl;
        std::cin >> x >> y >> z;
        Geometry::GeomVector a(x, y, z);
        std::vector<Geometry::GeomVector> vectors;
        vectors.push_back(a);

        std::cout<<"Enter new length "<<std::endl;
        std::cin>>newLength;
        Geometry::GeomVector result = a.setVectorLength(newLength);

        vectors.push_back(result);
        Geometry::Writer writer;
        std::string filepath = "output/vector.txt";
        writer.write(filepath, vectors);   
    }

    case 5:
    {   
        //Add a scalar quantity to vector

        int scalarValue;
        std::cout << "enter x, y and z value for vector1" << std::endl;
        std::cin >> x >> y >> z;
        Geometry::GeomVector V(x, y, z);

        std::cout << "enter integer value" << std::endl;
        std::cin >> scalarValue;

        Geometry::GeomVector result = V.addScalar(scalarValue);
        std::vector<Geometry::GeomVector> vectors;
        // vectors.push_back(a);
        vectors.push_back(result);
        Geometry::Writer writer;
        std::string filepath = "output/vector.txt";
        writer.write(filepath, vectors);   
    }
    break;

    case 6:
    {   //Subracting a Scalar
        int scalarValue;
        std::cout << "enter x, y and z value for vector1" << std::endl;
        std::cin >> x >> y >> z;
        Geometry::GeomVector a(x, y, z);

        std::cout << "enter integer value" << std::endl;
        std::cin >> scalarValue;

        Geometry::GeomVector result = a.subtractScalar(scalarValue);
        std::vector<Geometry::GeomVector> vectors;
        vectors.push_back(a);
        vectors.push_back(result);
        Geometry::Writer writer;
        std::string filepath = "output/vector.txt";
        writer.write(filepath, vectors); 
    }
    break;
    case 7:
    {   //Multiplying by scalar
        int scalarValue;
        std::cout << "enter x, y and z value for vector1" << std::endl;
        std::cin >> x >> y >> z;
        Geometry::GeomVector V(x, y, z);

        std::cout << "enter integer value" << std::endl;
        std::cin >> scalarValue;

        Geometry::GeomVector result = V.multiplyScalar(scalarValue);
        std::vector<Geometry::GeomVector> vectors;
        vectors.push_back(V);
        vectors.push_back(result);
        Geometry::Writer writer;
        std::string filepath = "output/vector.txt";
        writer.write(filepath, vectors); 
    }
    break;

    case 8:
    {   //Dividing by scalar
        int scalarValue;
        std::cout << "enter x, y and z value for vector1" << std::endl;
        std::cin >> x >> y >> z;
        Geometry::GeomVector V(x, y, z);

        std::cout << "enter integer value" << std::endl;
        std::cin >> scalarValue;

        Geometry::GeomVector result = V.divideScalar(scalarValue);
        std::vector<Geometry::GeomVector> vectors;
        vectors.push_back(V);
        vectors.push_back(result);
        Geometry::Writer writer;
        std::string filepath = "output/vector.txt";
        writer.write(filepath, vectors); 
    }
    break;

    case 9:
    {   //Addition of 2 vectors
        std::cout << "enter x, y and z value for vector1" << std::endl;
        std::cin >> x >> y >> z;
        Geometry::GeomVector V(x, y, z);

        std::cout << "enter x, y and z value for vector2" << std::endl;
        std::cin >> x1 >> y1 >> z1;
        Geometry::GeomVector V1(x1, y1, z1);

        Geometry::GeomVector result = V+V1;
        std::vector<Geometry::GeomVector> vectors;
        vectors.push_back(V);
        vectors.push_back(V1);
        vectors.push_back(result);
        Geometry::Writer writer;
        std::string filepath = "output/vector.txt";
        writer.write(filepath, vectors); 
    }
    break;

    case 10:
    {   //Dot product of vectors
        std::cout << "enter x, y and z value for vector1" << std::endl;
        std::cin >> x >> y >> z;
        Geometry::GeomVector a(x, y, z);

        std::cout << "enter x, y and z value for vector2" << std::endl;
        std::cin >> x1 >> y1 >> z1;
        Geometry::GeomVector b(x1, y1, z1);

        double result = a.dotProduct(b);
        std::vector<Geometry::GeomVector> vectors;
        vectors.push_back(a);
        vectors.push_back(b);
        std::cout<<"dot product is "<<result<<std::endl;
        Geometry::Writer writer;
        std::string filepath = "output/vector.txt";
        writer.write(filepath, vectors); 
    }
    break;

    case 11:
    {   //Cross Products
        std::cout << "enter x, y and z value for vector1" << std::endl;
        std::cin >> x >> y >> z;
        Geometry::GeomVector a(x, y, z);

        std::cout << "enter x, y and z value for vector2" << std::endl;
        std::cin >> x1 >> y1 >> z1;
        Geometry::GeomVector b(x1, y1, z1);

        Geometry::GeomVector result = a.crossProduct(b);
        std::vector<Geometry::GeomVector> vectors;
        vectors.push_back(a);
        vectors.push_back(b);
        vectors.push_back(result);
        Geometry::Writer writer;
        std::string filepath = "output/vector.txt";
        writer.write(filepath, vectors); 
    }
    break;

    case 12:
    {   //Direction cosines
        std::cout << "enter x, y and z value for vector1" << std::endl;
        std::cin >> x >> y >> z;
        Geometry::GeomVector a(x, y, z);
        a.directionCosines();
        std::vector<Geometry::GeomVector> vectors;
        vectors.push_back(a);       
    }
    break;

    case 13:
    {   //Matrix Multiplication
        std::cout << "enter x, y and z value for vector1" << std::endl;
        std::cin >> x >> y >> z;
        Geometry::GeomVector a(x, y, z);

        double input_matrix[3][3];
        std::cout << "Enter the elements of the 3 x 3 matrix: ";
        for(int i = 0; i < 3  ; i++)
        {   
            for(int j = 0 ; j<3 ; j++ )
                std::cin>>input_matrix[i][j];
        }
        LinearAlgebra::Matrix matrix(input_matrix);

        Geometry::GeomVector result = a.multiplyMatrix(matrix);
        std::vector<Geometry::GeomVector> vectors;
        vectors.push_back(a);
        vectors.push_back(result);
        Geometry::Writer writer;
        std::string filepath = "output/vector.txt";
        writer.write(filepath, vectors); 
    }
    break;

    case 14:
    {   //Distance between 2 vectors
        std::cout << "enter x, y and z value for vector1" << std::endl;
        std::cin >> x >> y >> z;
        Geometry::GeomVector a(x, y, z);

        std::cout << "enter x,y and z value for vector2" << std::endl;
        std::cin >> x1 >> y1 >> z1;
        Geometry::GeomVector b(x1, y1, z1);

        double result = a.distanceBetweenVectors(b);
        std::cout<<"Distance between two vectors is "<<result<<std::endl;
        
    }
    break;

    case 15:
    {   //Distance between vector and plane
        double x2;
        double y2;
        double z2;
        std::cout << "enter x, y and z value for vector1" << std::endl;
        std::cin >> x >> y >> z;
        Geometry::GeomVector a(x, y, z);

        std::cout << "enter x,y and z value for normal" << std::endl;
        std::cin >> x1 >> y1 >> z1;
        Geometry::GeomVector normal(x1, y1, z1);

        std::cout << "enter 3 coordinates for point" << std::endl;
        std::cin >> x2>>y2>>z2;
        Geometry::Point3D point(x2, y2, z2);

        Geometry::Plane plane(normal,point);
        double result = a.distanceBetweenVectorAndPlane(plane);
        std::cout<<"Distance between vector and plane is "<<result<<std::endl;
    }
    break;

    case 16:
    {
        //Angle between 2 vectors
        std::cout << "enter x, y and z value for vector1" << std::endl;
        std::cin >> x >> y >> z;
        Geometry::GeomVector a(x, y, z);

        std::cout << "enter x,y and z value for normal" << std::endl;
        std::cin >> x1 >> y1 >> z1;
        Geometry::GeomVector b(x1, y1, z1);

        double result = a.angleBetweenVectors(b);
        std::cout<<"Angle between two vectors is "<<result<<std::endl;
    }
    break;

    case 17:
    {   //Angle between vector and plane
        double x2;
        double y2;
        double z2;
        std::cout << "enter x, y and z value for vector1" << std::endl;
        std::cin >> x >> y >> z;
        Geometry::GeomVector a(x, y, z);

        std::cout << "enter x,y and z value for normal" << std::endl;
        std::cin >> x1 >> y1 >> z1;
        Geometry::GeomVector normal(x1, y1, z1);

        std::cout << "enter 3 coordinates for point" << std::endl;
        std::cin >> x2>>y2>>z2;
        Geometry::Point3D point(x2, y2, z2);

        Geometry::Plane plane(normal,point);
        double result = a.angleBetweenVectorAndPlane(plane);
        std::cout<<"angle between vector and plane is "<<result<<std::endl;
    }
    break;

    case 18:
    {   
        //Project on vector
        std::cout << "enter x, y and z value for vector1" << std::endl;
        std::cin >> x >> y >> z;
        Geometry::GeomVector a(x, y, z);

        std::cout << "enter x,y and z value for normal" << std::endl;
        std::cin >> x1 >> y1 >> z1;
        Geometry::GeomVector b(x1, y1, z1);

        Geometry::GeomVector result = a.projectionOnVector(b);
        std::vector<Geometry::GeomVector> vectors;
        vectors.push_back(a);
        vectors.push_back(b);
        vectors.push_back(result);
        Geometry::Writer writer;
        std::string filepath = "output/vector.txt";
        writer.write(filepath, vectors); 
    }
    break;

    case 19:
    {
        //Projector vector on plane
        double x2;
        double y2;
        double z2;
        std::cout << "enter x, y and z value for vector1" << std::endl;
        std::cin >> x >> y >> z;
        Geometry::GeomVector a(x, y, z);

        std::cout << "enter x,y and z value for normal" << std::endl;
        std::cin >> x1 >> y1 >> z1;
        Geometry::GeomVector normal(x1, y1, z1);

        Geometry::GeomVector result = a.projectVectorOnPlane(a,normal);
        std::vector<Geometry::GeomVector> vectors;
        vectors.push_back(a);
        vectors.push_back(normal);
        vectors.push_back(result);
        Geometry::Writer writer;
        std::string filepath = "output/vector.txt";
        writer.write(filepath, vectors); 
    }
    break;
    case 20:
        {   
            //Angle between vector and axis
            //Take input for vector and axis
            std::cout << "enter x, y and z value for vector1" << std::endl;
            std::cin >> x >> y >> z;
            Geometry::GeomVector a(x, y, z);
            double result;
            int value;
            // 0 for x 1 for y 2 for z
            std::cout << "enter int value 0, 1 or 2" << std::endl;
            std::cin >> value;
            result = a.angleBetweenVectorAndAxis(value);
        }
        break;
    
    default:
        break;
    }
    return 0;
}






















































































































































































int add()
{   

    return 2+3 ;
}