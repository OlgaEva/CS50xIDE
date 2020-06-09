{"filter":false,"title":"recursion.c","tooltip":"/recursion.c","undoManager":{"mark":44,"position":44,"stack":[[{"start":{"row":0,"column":0},"end":{"row":22,"column":1},"action":"insert","lines":["#include <stdio.h>","#include <cs50.h>","","void draw(int h);","","int main(void)","{","    int height = get_int(\"Height: \");","","    draw(height);","}","","void draw(int h)","{","    for (int i = 1; i <= h; i++)","    {","        for (int j = 1; j <= i; j++)","        {","            printf(\"#\");","        }","        printf(\"\\n\");","    }","}"],"id":1}],[{"start":{"row":14,"column":3},"end":{"row":21,"column":5},"action":"remove","lines":[" for (int i = 1; i <= h; i++)","    {","        for (int j = 1; j <= i; j++)","        {","            printf(\"#\");","        }","        printf(\"\\n\");","    }"],"id":2}],[{"start":{"row":14,"column":3},"end":{"row":14,"column":4},"action":"insert","lines":["i"],"id":3},{"start":{"row":14,"column":4},"end":{"row":14,"column":5},"action":"insert","lines":["f"]}],[{"start":{"row":14,"column":5},"end":{"row":14,"column":6},"action":"insert","lines":[" "],"id":4}],[{"start":{"row":14,"column":6},"end":{"row":14,"column":8},"action":"insert","lines":["()"],"id":5}],[{"start":{"row":14,"column":7},"end":{"row":14,"column":8},"action":"insert","lines":["h"],"id":6}],[{"start":{"row":14,"column":8},"end":{"row":14,"column":9},"action":"insert","lines":[" "],"id":7},{"start":{"row":14,"column":9},"end":{"row":14,"column":10},"action":"insert","lines":["="]},{"start":{"row":14,"column":10},"end":{"row":14,"column":11},"action":"insert","lines":["="]}],[{"start":{"row":14,"column":11},"end":{"row":14,"column":12},"action":"insert","lines":[" "],"id":8},{"start":{"row":14,"column":12},"end":{"row":14,"column":13},"action":"insert","lines":["0"]}],[{"start":{"row":14,"column":14},"end":{"row":15,"column":0},"action":"insert","lines":["",""],"id":9},{"start":{"row":15,"column":0},"end":{"row":15,"column":3},"action":"insert","lines":["   "]},{"start":{"row":15,"column":3},"end":{"row":15,"column":4},"action":"insert","lines":["{"]}],[{"start":{"row":15,"column":4},"end":{"row":17,"column":4},"action":"insert","lines":["","       ","   }"],"id":10}],[{"start":{"row":16,"column":7},"end":{"row":16,"column":8},"action":"insert","lines":["r"],"id":11},{"start":{"row":16,"column":8},"end":{"row":16,"column":9},"action":"insert","lines":["e"]},{"start":{"row":16,"column":9},"end":{"row":16,"column":10},"action":"insert","lines":["t"]},{"start":{"row":16,"column":10},"end":{"row":16,"column":11},"action":"insert","lines":["u"]},{"start":{"row":16,"column":11},"end":{"row":16,"column":12},"action":"insert","lines":["r"]},{"start":{"row":16,"column":12},"end":{"row":16,"column":13},"action":"insert","lines":["n"]}],[{"start":{"row":16,"column":13},"end":{"row":16,"column":14},"action":"insert","lines":[";"],"id":12}],[{"start":{"row":17,"column":4},"end":{"row":18,"column":0},"action":"insert","lines":["",""],"id":13},{"start":{"row":18,"column":0},"end":{"row":18,"column":3},"action":"insert","lines":["   "]}],[{"start":{"row":18,"column":3},"end":{"row":19,"column":0},"action":"insert","lines":["",""],"id":14},{"start":{"row":19,"column":0},"end":{"row":19,"column":3},"action":"insert","lines":["   "]},{"start":{"row":19,"column":3},"end":{"row":19,"column":4},"action":"insert","lines":["d"]},{"start":{"row":19,"column":4},"end":{"row":19,"column":5},"action":"insert","lines":["r"]},{"start":{"row":19,"column":5},"end":{"row":19,"column":6},"action":"insert","lines":["a"]},{"start":{"row":19,"column":6},"end":{"row":19,"column":7},"action":"insert","lines":["w"]}],[{"start":{"row":19,"column":7},"end":{"row":19,"column":9},"action":"insert","lines":["()"],"id":15}],[{"start":{"row":19,"column":8},"end":{"row":19,"column":9},"action":"insert","lines":["h"],"id":16}],[{"start":{"row":19,"column":9},"end":{"row":19,"column":10},"action":"insert","lines":[" "],"id":17},{"start":{"row":19,"column":10},"end":{"row":19,"column":11},"action":"insert","lines":["-"]}],[{"start":{"row":19,"column":11},"end":{"row":19,"column":12},"action":"insert","lines":[" "],"id":18},{"start":{"row":19,"column":12},"end":{"row":19,"column":13},"action":"insert","lines":["1"]}],[{"start":{"row":19,"column":14},"end":{"row":19,"column":15},"action":"insert","lines":[";"],"id":19}],[{"start":{"row":19,"column":15},"end":{"row":20,"column":0},"action":"insert","lines":["",""],"id":20},{"start":{"row":20,"column":0},"end":{"row":20,"column":3},"action":"insert","lines":["   "]},{"start":{"row":20,"column":3},"end":{"row":21,"column":0},"action":"insert","lines":["",""]},{"start":{"row":21,"column":0},"end":{"row":21,"column":3},"action":"insert","lines":["   "]},{"start":{"row":21,"column":3},"end":{"row":21,"column":4},"action":"insert","lines":["f"]},{"start":{"row":21,"column":4},"end":{"row":21,"column":5},"action":"insert","lines":["o"]},{"start":{"row":21,"column":5},"end":{"row":21,"column":6},"action":"insert","lines":["r"]}],[{"start":{"row":21,"column":6},"end":{"row":21,"column":7},"action":"insert","lines":[" "],"id":21}],[{"start":{"row":21,"column":7},"end":{"row":21,"column":9},"action":"insert","lines":["()"],"id":22}],[{"start":{"row":21,"column":8},"end":{"row":21,"column":9},"action":"insert","lines":["i"],"id":23},{"start":{"row":21,"column":9},"end":{"row":21,"column":10},"action":"insert","lines":["n"]},{"start":{"row":21,"column":10},"end":{"row":21,"column":11},"action":"insert","lines":["t"]}],[{"start":{"row":21,"column":11},"end":{"row":21,"column":12},"action":"insert","lines":[" "],"id":24},{"start":{"row":21,"column":12},"end":{"row":21,"column":13},"action":"insert","lines":["i"]}],[{"start":{"row":21,"column":13},"end":{"row":21,"column":14},"action":"insert","lines":[" "],"id":25},{"start":{"row":21,"column":14},"end":{"row":21,"column":15},"action":"insert","lines":["="]}],[{"start":{"row":21,"column":15},"end":{"row":21,"column":16},"action":"insert","lines":[" "],"id":26},{"start":{"row":21,"column":16},"end":{"row":21,"column":17},"action":"insert","lines":["0"]},{"start":{"row":21,"column":17},"end":{"row":21,"column":18},"action":"insert","lines":[";"]}],[{"start":{"row":21,"column":18},"end":{"row":21,"column":19},"action":"insert","lines":[" "],"id":27},{"start":{"row":21,"column":19},"end":{"row":21,"column":20},"action":"insert","lines":["i"]}],[{"start":{"row":21,"column":20},"end":{"row":21,"column":21},"action":"insert","lines":[" "],"id":28},{"start":{"row":21,"column":21},"end":{"row":21,"column":22},"action":"insert","lines":["<"]}],[{"start":{"row":21,"column":22},"end":{"row":21,"column":23},"action":"insert","lines":[" "],"id":29},{"start":{"row":21,"column":23},"end":{"row":21,"column":24},"action":"insert","lines":["h"]}],[{"start":{"row":21,"column":24},"end":{"row":21,"column":25},"action":"insert","lines":[" "],"id":30}],[{"start":{"row":21,"column":24},"end":{"row":21,"column":25},"action":"remove","lines":[" "],"id":31}],[{"start":{"row":21,"column":24},"end":{"row":21,"column":25},"action":"insert","lines":[";"],"id":32}],[{"start":{"row":21,"column":25},"end":{"row":21,"column":26},"action":"insert","lines":[" "],"id":33},{"start":{"row":21,"column":26},"end":{"row":21,"column":27},"action":"insert","lines":["i"]},{"start":{"row":21,"column":27},"end":{"row":21,"column":28},"action":"insert","lines":["+"]},{"start":{"row":21,"column":28},"end":{"row":21,"column":29},"action":"insert","lines":["+"]}],[{"start":{"row":21,"column":30},"end":{"row":22,"column":0},"action":"insert","lines":["",""],"id":34},{"start":{"row":22,"column":0},"end":{"row":22,"column":3},"action":"insert","lines":["   "]},{"start":{"row":22,"column":3},"end":{"row":22,"column":4},"action":"insert","lines":["{"]}],[{"start":{"row":22,"column":4},"end":{"row":24,"column":4},"action":"insert","lines":["","       ","   }"],"id":35}],[{"start":{"row":23,"column":7},"end":{"row":23,"column":8},"action":"insert","lines":["p"],"id":36},{"start":{"row":23,"column":8},"end":{"row":23,"column":9},"action":"insert","lines":["r"]},{"start":{"row":23,"column":9},"end":{"row":23,"column":10},"action":"insert","lines":["i"]},{"start":{"row":23,"column":10},"end":{"row":23,"column":11},"action":"insert","lines":["n"]},{"start":{"row":23,"column":11},"end":{"row":23,"column":12},"action":"insert","lines":["t"]},{"start":{"row":23,"column":12},"end":{"row":23,"column":13},"action":"insert","lines":["f"]}],[{"start":{"row":23,"column":13},"end":{"row":23,"column":15},"action":"insert","lines":["()"],"id":37}],[{"start":{"row":23,"column":14},"end":{"row":23,"column":16},"action":"insert","lines":["\"\""],"id":38}],[{"start":{"row":23,"column":15},"end":{"row":23,"column":16},"action":"insert","lines":["#"],"id":39}],[{"start":{"row":23,"column":18},"end":{"row":23,"column":19},"action":"insert","lines":[";"],"id":40}],[{"start":{"row":24,"column":4},"end":{"row":25,"column":0},"action":"insert","lines":["",""],"id":41},{"start":{"row":25,"column":0},"end":{"row":25,"column":3},"action":"insert","lines":["   "]},{"start":{"row":25,"column":3},"end":{"row":25,"column":4},"action":"insert","lines":["p"]},{"start":{"row":25,"column":4},"end":{"row":25,"column":5},"action":"insert","lines":["r"]},{"start":{"row":25,"column":5},"end":{"row":25,"column":6},"action":"insert","lines":["i"]},{"start":{"row":25,"column":6},"end":{"row":25,"column":7},"action":"insert","lines":["n"]},{"start":{"row":25,"column":7},"end":{"row":25,"column":8},"action":"insert","lines":["t"]},{"start":{"row":25,"column":8},"end":{"row":25,"column":9},"action":"insert","lines":["f"]}],[{"start":{"row":25,"column":9},"end":{"row":25,"column":11},"action":"insert","lines":["()"],"id":42}],[{"start":{"row":25,"column":10},"end":{"row":25,"column":12},"action":"insert","lines":["\"\""],"id":43}],[{"start":{"row":25,"column":11},"end":{"row":25,"column":12},"action":"insert","lines":["\\"],"id":44},{"start":{"row":25,"column":12},"end":{"row":25,"column":13},"action":"insert","lines":["n"]}],[{"start":{"row":25,"column":15},"end":{"row":25,"column":16},"action":"insert","lines":[";"],"id":45}],[{"start":{"row":18,"column":0},"end":{"row":18,"column":3},"action":"remove","lines":["   "],"id":46},{"start":{"row":20,"column":0},"end":{"row":20,"column":3},"action":"remove","lines":["   "]}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":18,"column":0},"end":{"row":20,"column":3},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1591189421417,"hash":"de7258d5347fa8c859d9b5deef94f2f7f1170800"}