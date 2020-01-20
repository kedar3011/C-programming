#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
       int t,i;
       scanf("%d",&t);
       for(i=0;i<t;i++)
       {
              int j,e,n,k,x,y,s;
              scanf("%d%d",&n,&e);
              int mat[n+1][n+1],Q[n+1],Ql,v[n+1],L[n+1],Ll;
              for(j=1;j<=n;j++)
              {
                     Q[j] = 0;
                     v[j] = 0;
                     L[j] = 0;
                     for(k=1;k<=n;k++)
                     {
                           mat[j][k] = 0;
                     }
              }
              for(j=0;j<e;j++)
              {
                     scanf("%d%d",&x,&y);
                     mat[x][y] = 1;
                     mat[y][x] = 1;
              }
              scanf("%d",&s);
              Q[1] = s;
              v[s] = 1;
              L[1] = 0;
              Ll=1;
              Ql = 1;
              for(j=1;j<Ql+1;j++)
              {
                     for(k=1;k<=n;k++)
                     {
                           if(mat[Q[j]][k] == 1 && v[k]==0)
                           {
                                  Ql++;
                                  Q[Ql] = k;
                                  v[k] = 1;
                                  Ll++;
                                  L[Ll] = L[j] + 1;
                                 
                           }
                     }
              }
              int len[n+1];
              for(j=1;j<n+1;j++)
              {
                     len[j] = -1;
                     for(k=1;k<=Ql;k++)
                     {
                           if(j==Q[k])
                           {
                                  len[j] = 6*L[k];
                           }
                     }     
              }
              for(j=1;j<=n;j++)
              {
                     if(j!=s)
                     {
                           printf("%d ",len[j]);
                     }
              }
              printf("\n");
       }
    return 0;
}
