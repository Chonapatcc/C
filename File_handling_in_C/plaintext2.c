#include <stdio.h>
#include <math.h>
#define W 1024
#define H 768
unsigned char rgb[3*W*H];
int main()
{ char filename[80];
FILE *fout;
int x, y, xx, yy;
unsigned char r, g, b;
sprintf(filename, "output_p6.ppm");
fout = fopen(filename, "wb+");
if (fout == NULL) {
fprintf(stderr, "Cannot open %s for write!\n", filename);
return 1;
}
fprintf(fout, "P6\n");
fprintf(fout, "# Example\n");
fprintf(fout, "%d %d\n", W, H);
fprintf(fout, "255\n");
int r1=0,g1=0,b1=0;
for (y=0; y < H; y++) {
for (x=0; x < W; x++) {
xx = x - W/2;
yy = H/2 - y;
if (xx * xx + yy * yy <= H * H / 4) {
r = 32; g = g1; b = 225;
r1++;g1++;b1++;
}
else {
r = 32; g = 225; b = 225;
}
rgb[3*W*y + 3*x] = r;
rgb[3*W*y + 3*x+1] = g;
rgb[3*W*y + 3*x+2] = b;
}
}
fwrite(rgb, 3, W*H, fout);
fclose(fout);
}