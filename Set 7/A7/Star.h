//
// Created by gwdin on 11/29/2021.
//

#ifndef SFML_TEMPLATE_STAR_H
#define SFML_TEMPLATE_STAR_H

class star {

public:
    /** @brief creates a default calculator
    * @desc Creates a default calculator that set to members to 0
    */
    star();
    /** @brief creates a default calculator
   * @desc Creates a default calculator with both operands set to 1
   * @param left x-cords of the star
   * @param middle y-cords of the star
     *  @param right brightness of the star
   */
    star(double xCoords, double yCoords, double brightness);

    /** @brief return the y-coordinate
      * @return value of x-coordinate
      */
    double getX();
    /** @brief return the y-coordinate
      * @return value of y-coordinate
      */
    double getY();
    /** @brief return the brightness of the star
          * @return value of brightness
          */
    double getBright();
    //transforms the coordinates from (0, 0) to (WIDTH, HEIGHT)
    /** @brief transforms the x-coordinate
   * @param left value is width of the screen
   * @param right value is coordinate that will transformed
   * @return ( xStar + 1 ) * WIDTH / 2
   */
    float getTransformedX(int const WIDTH, double xStar);
    /** @brief transforms the y-coordinate
   * @param left value is height of the screen
   * @param right value is coordinate that will transformed
   * @return ( -yStar + 1 ) * HEIGHT / 2
   */
    float getTransformedY(int const HEIGHT, double yStar);

    // gets the gray scale for the stars
    /** @brief obtains the brightness of the star
   * @param LHS the brightness of the star thats being used
    * @param RHS the max brightness that was found out of all of the stars
    * @return maxBright - ( 255.0 * brightness ) / maxBright
   */
    int getGrayscaleColor(double brightness , double maxBright);
private:
    double xCoords;  // private data members
    double yCoords;
    double brightness;

};

#endif //SFML_TEMPLATE_STAR_H // ends the corresponding #ifndef
