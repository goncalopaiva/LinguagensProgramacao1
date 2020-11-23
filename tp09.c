//
// Created by Goncalo on 11/16/2020.
//

#include "tp09.h"

int compare_pts(struct pt pt1, struct pt pt2) {


}

int compare_rects(RECT r1, RECT r2){


}

void read_pt(struct pt* pp) {


}

void read_rect(struct rect* pr) {


}

void print_pt(char pt_label[], const struct pt* pp) {


}

void print_rect(char rect_label[], const struct rect* pr) {


}

typedef struct node_point {
    struct pt info;
    struct node_point * pdown;
}NODE_POINT;

typedef struct stack_node_points {
    int nnodes;
    NODE_POINT * ptop;
} STACK_NODE_POINTS;

STACK_NODE_POINTS stack1 = {0, NULL};
struct pt pt1={0,0}, pt2={1,1};

push_stack_node_points(&stack1, pt1);
push_stack_node_points(&stack1, pt2);

struct pt pt3 = pop_stack_node_points_copynode(&stack1);
NODE_POINT pnp1 = pop_stack_node_points_copynode(&stack1);

int is_empty (STACK_NODE_POINTS snp) {
    //return (snp.nnodes == 0 && snp.ptop == NULL);
    if (snp.nnodes == 0 && snp.ptop == NULL) {
        return 1;
    }
    return 0;
}

void push_stack_node_points (STACK_NODE_POINTS *psnp, struct pt info) {
    NODE_POINT * pmp = malloc(sizeof(NODE_POINT));
    pmp -> info = info;
    pmp -> pdown = psnp -> ptop;
    //(*pmp).pdown = (*psup).ptop;
    psnp -> ptop = pmp;
    psnp -> nnodes++;
}

struct pt pop_stack_node_points_copynode (STACK_NODE_POINTS *psnp) {
    struct pt pt ={INT_MAX,INT_MAX};
    if (is_empty (* psnp)) {
        return pt;
    }
    NODE_POINT *pnp = psnp -> ptop;
    pt = psnp -> ptop -> info;
    psnp -> ptop = psnp -> ptop -> pdown;
    psnp -> nnodes--;
    free(pnp);
    return pt;
}

struct pt peep_stack_node_points (const STACK_NODE_POINTS *psnp, int delta) {
    struct pt pt = {INT_MAX, INT_MAX};
    if (is_empty(*psnp)) {
        return pt;
    }
    NODE_POINT *pnp = psnp -> ptop;
    int i=0;
    while (i<delta && pnp != NULL) {
        i++;
        pnp = pnp -> pdown;
    }
    return pnp -> info;
}



