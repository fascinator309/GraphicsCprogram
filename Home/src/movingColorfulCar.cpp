#include <graphics.h>
#include <conio.h>

// Function to draw and fill the car
void drawCar(int x, int y) {
    // Set fill style and color for the car body
    setfillstyle(SOLID_FILL, RED); // Fill the car body with red color
    bar(x, y, x + 100, y + 40); // Draw and fill the main body of the car

    // Set fill style and color for the car roof
    setfillstyle(SOLID_FILL, BLUE); // Fill the car roof with blue color
    bar(x + 20, y - 20, x + 80, y); // Draw and fill the roof of the car

    // Draw the wheels
    setcolor(BLACK); // Set the color for the wheels
    circle(x + 25, y + 40, 15); // Front wheel
    circle(x + 75, y + 40, 15); // Rear wheel

    setfillstyle(SOLID_FILL, BLACK); // Set the fill style to solid black
    floodfill(x + 25, y + 40, BLACK); // Fill the front wheel
    floodfill(x + 75, y + 40, BLACK); 
}

int main() {
    int x = 0; // Initial x position
    int y = 300; // Initial y position
    int direction = 1; // 1 for right, -1 for left

    int gd = DETECT, gm;
    initgraph(&gd, &gm, ""); // Initialize graphics mode

    setbkcolor(WHITE);
    
    int maxx = getmaxx(); // Get the maximum x-coordinate of the screen

    while (!kbhit()) { // Run the loop until a key is pressed
        cleardevice(); // Clear the screen
        drawCar(x, y); // Draw the car

        // Update car position
        x += 5 * direction;

        // Toggle direction if the car hits the edge of the screen
        if (x > maxx - 100 || x < 0) { // 100 is the width of the car
            direction *= -1; // Reverse direction
        }

        delay(5); // Delay to control the speed of animation
    }

    getch(); // Wait for user input
    closegraph(); // Close the graphics mode
    return 0;
}
