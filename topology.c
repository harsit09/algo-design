#include <stdio.h>
#include <stdbool.h>

#define max_arr 20

int main() {
    
    bool adj_matrix[max_arr][max_arr];
    int in_degree[max_arr] ={ 0 };
    bool is_visited[max_arr] ={0};

    int vertices;

    printf("enter total verices:");
    scanf("%d",&vertices);
    
    if(vertices>max_arr) {
        printf("\n value too big ");
        return -1;
    }
    printf("\nenter adjacency matrix");
    for (int  i = 0; i < vertices; i++)
    {
        for ( int j = 0; i < vertices; j++) 
        {
            /* code */
            int val;
            scanf("%d",&val);
            if (val!=0 && val!=1)
            {
                /* code */
                printf("\n invalid value\n");
                return -1;
            }
            adj_matrix[i][j]=val;

        }
           /* code */
    }

    int topological_order[max_arr];
    int topo_size =0;

    while (topo_size < vertices) { 
   for (int i = 0; i < vertices; i++)
   {
    /* code */
     for (int j  = 0; i < vertices; j++)
     {
        /* code */
        if (!is_visited[i] && in_degree[i] ==0) {
            topological_order[topo_size++] =(i+1);
            is_visited[i]=true;
        }
        for(int j=0;j<vertices;i++) {

            if (adj_matrix[j][i]) {
                in_degree[i]--;
            }
            
        
            
            
           }
        
            /* code */
        
        
     }
     
    }
    
}


printf("\n topological order:");
for (int i = 0; i < topo_size; i++)
{
    printf("%d",topological_order[i]);
}
printf("\n");
return 0;
}