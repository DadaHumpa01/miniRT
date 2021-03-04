#include <iostream>

int main() {

    // Image

    const int image_width = 200;
    const int image_height = 100;

    // Render

    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = image_height-1; j >= 0; --j) {
        for (int i = 0; i < image_width; ++i) {
            float r = float(i) / float(image_width);
            float g = float(j) / float(image_height);             
            float b = 0.25;

            int ir = int(255.999 * r);
            int ig = int(255.999 * g);
            int ib = int(255.999 * b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }
}