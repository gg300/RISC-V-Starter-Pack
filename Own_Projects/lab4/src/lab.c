
extern int ColourToGrey_Pixel(int R,int G,int B);
extern unsigned char VanGogh_128x128[];
// extern unsigned char TheScream_256x256[];   /// not enough memory

#define WIDTH 128
#define HEIGHT 128


// #define WIDTH 256   /// not enough memory
// #define HEIGHT 256  

typedef struct {
    unsigned char R;
    unsigned char G;
    unsigned char B;

}RGB;

void ColourToGrey(RGB Colour[WIDTH][HEIGHT],unsigned char Grey[WIDTH][HEIGHT]){
    int i,j;
    for(int i=0;i<WIDTH;i++){
        for(j=0;j<HEIGHT;j++){
            Grey[i][j]=ColourToGrey_Pixel(Colour[i][j].R, Colour[i][j].G,Colour[i][j].B);
        }
    }
}

void initColourImage(RGB image[WIDTH][HEIGHT]) {
    int i,j;

    for (i=0;i<WIDTH;i++)
        for (j=0; j<HEIGHT; j++) {
            image[i][j].R = VanGogh_128x128[(i*HEIGHT + j)*3];
            image[i][j].G = VanGogh_128x128[(i*HEIGHT + j)*3 + 1];
            image[i][j].B = VanGogh_128x128[(i*HEIGHT + j)*3 + 2];
            // image[i][j].R= TheScream_256x256[(i*HEIGHT + j)*3];   ///// not enough memory
            // image[i][j].G= TheScream_256x256[(i*HEIGHT + j)*3+1];
            // image[i][j].B= TheScream_256x256[(i*HEIGHT + j)*3+2];
        }
}

int main ( void )
{
    unsigned char GreyImage[WIDTH][HEIGHT];
    RGB ColourImage[WIDTH][HEIGHT];


    initColourImage(ColourImage);
    ColourToGrey(ColourImage, GreyImage);
    // uartInit();

    while(1);

    return 0;
}