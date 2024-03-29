//
// Created by Goncalo on 11/16/2020.
//

#ifndef LPI_TP09_H
#define LPI_TP09_H

#include <stdio.h>
#include <stdlib.h>

/**
 * Declarar struct para representação de um point
 * NB 1: na aula TP designa-se por struct pt para evitar conflito com pr09.h onde se designa struct point.
 * NB 2: também poderíamos definir um novo tipo PT: typedef struct { int x, y; } PT;
 */
struct pt { int x, y; };

/**
 * Declarar novo tipo typedef rectangle (contendo down and up points, e.g. { {0,0}, {1,1} }).
 * NB: na aula TP designa-se por rect para evitar conflito com pr09.h.
 */
typedef struct rect { struct pt downpt, uppt; }RECT;

/** Compare to points in space (equal if both have the same coordinates).
 * @param pt1 - one point in space.
 * @param pt2 - another point in space.
 * @return 1 (true) or 0 (false).
 */
int compare_pts(struct pt pt1, struct pt pt2);

/** Compare to rectangles in space (equal if both have the same points).
 * @param r1 - one rectangle in space.
 * @param r2 - another rectangle in space.
 * @return 1 (true) or 0 (false).
 */
int compare_rects(RECT r1, RECT r2);

/** Allocate heap memory for storing the coordinates of a point.
 * @return address to allocated point memory.
 */
struct pt* create_pt(void);

/** Allocate heap memory for storing a rectangle in space.
 * @return address to allocated rectangle memory.
 */
struct rect* create_rect(void);

/** Use scanf to read the coordinates of a point and store them into memory pointed by pp.
 * @param pp - pointer to a point.
 */
void read_pt(struct pt* pp);

/** Use scanf to read the coordinates of points of a rectangle and store them into memory pointed by pr.
 * @param pr - pointer to a rectangle.
 */
void read_rect(struct rect* pr);

/** Print the coordinates of a point, pointed by pp.
 * @param pt_label - string containing the label of the point to print.
 * @param pp - pointer to point to print.
 */
void print_pt(char pt_label[], const struct pt* pp);

/** Print the coordinates of the points of a rectangle pointed by pr.
 * @param rect_label - string containing the label of the rectangle to print.
 * @param pr - pointer to rectangle to print.
 */
void print_rect(char rect_label[], const struct rect* pr);

int main_tp09(int argc, const char * argv[]);

#endif //LPI_TP09_H
