#include <assert.h>
#include <stdlib.h>

#include "cost.h"
#include "graph.h"
#include "mini_set.h"


cost_t *dijkstra(graph_t graph, vertex_t init) {

    cost_t *ret = calloc(graph_max_vertexs(graph), sizeof(cost_t));

    set ver = set_empty();
    cost_t cos;

    for(unsigned int i = 0; i < graph_max_vertexs(graph); i++){
        ver = set_add(ver, i);
        ret[i] = graph_get_cost(graph, init, i);
    }

    ver = set_elim(ver, init);

    while(!set_is_empty(ver)){
        cos = mini(ver);
    }
}
