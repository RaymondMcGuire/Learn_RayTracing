 //#include <iostream>
 //#include "sphere.h"
 //#include"hitable_list.h"
 //#include"float.h"

 //#define STB_IMAGE_WRITE_IMPLEMENTATION
 //#include "stb/stb_image_write.h"
 //#define STB_IMAGE_IMPLEMENTATION
 //#include "stb/stb_image.h"
 //using namespace std;

 //vec3 color(const ray&r, hitable *world){
 //	hit_record rec;
 //	if(world->hit(r,0.0, FLT_MAX,rec)){
 //		return 0.5*vec3(rec.normal.x()+1,rec.normal.y()+1,rec.normal.z()+1);
 //	}else{
 //		vec3 unit_direction = unit_vector(r.direction());
 //			float t = 0.5*(unit_direction.y() +1.0);
 //    	return (1.0-t)*vec3(1.0,1.0,1.0) + t*vec3(0.5,0.7,1.0);
 //	}
 //}

 //int main()
 //{
 //   int nx = 800;
 //    int ny =400;
 //    int n = 4;

 //    vec3 lower_left_corner(-2.0,-1.0,-1.0);
 //    vec3 horizontal(4.0,0.0,0.0);
 //    vec3 vertical(0.0,2.0,0.0);
 //    vec3 origin(0.0,0.0,0.0);

 //	hitable *list[2];
 //	list[0] = new sphere(vec3(0,0,-1),0.5);
 //	list[1] = new sphere(vec3(0,-100.5,-1),100);
 //	hitable *world = new hitable_list(list,2);

 //	unsigned char *data = new unsigned char[nx * ny * n];
 //	for (int j = ny - 1; j >= 0; j--)
 //	{
 //		for (int i = 0; i < nx; i++)
 //		{
 //            float u = float(i) / float(nx);
 //            float v = float(ny - 1 - j) / float(ny);
 //			ray r(origin, lower_left_corner + u*horizontal + v*vertical);

 //			vec3 p = r.point_at_parameter(2.0);
 //			vec3 col = color(r,world);
 //			data[j * nx * n + i * n + 0] = int(255.99 * col.r());
 //			data[j * nx * n + i * n + 1] = int(255.99 * col.g());
 //			data[j * nx * n + i * n + 2] = int(255.99 * col.b());
 //			data[j * nx * n + i * n + 3] = 255;
 //		}
 //	}

 //    cout << "write png to file!" << endl;
 //	stbi_write_png("cpt5_hit.png", nx, ny, n, data, nx * 4);
 //	stbi_image_free(data);
 //	return 0;
 //}