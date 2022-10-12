//Program to find which element is repeated in the array and which is not
#include<stdio.h>
int main()
{
    int arr[] = {20,43,54,54,43,54,51};
    int n = sizeof(arr)/sizeof(arr[0]);

    int visited[n];

    for(int i=0; i < n; i++){

        // only if unvisited
        if(visited[i] == 0){
            int count = 1;

            for(int j = i+1; j < n; j++) {
				// if appears again in the array
				if(arr[i] == arr[j])
				{ // increase count & mark index visited
					count++;
					visited[j] = 1;
				}
			} //

            if(count > 1)
                printf("%d ",arr[i]);
        }
    }
   return 0;
}
