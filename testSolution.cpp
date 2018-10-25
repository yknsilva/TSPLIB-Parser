#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

#define FORR(i, a, b) for (int i = a; i < b; ++i)
#define FOR(i, a) FORR(i, 0, a)

void printRoute(vector<int> route) {
    printf("\nRoute: ");
    FOR(i, route.size()) {
        printf("%d ", route[i]);
    }
    printf("\n\n");
}

int printMatrix(vector<vector<int>> matrix) {
    printf("\nMATRIX\n\n");
    FOR(i, matrix.size()) {
        FOR(j, matrix.size()) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

int calculateTSPCost(vector<int> route, vector<vector<int>> matrix) {
    int cost = 0;
    
    int pos1, pos2;

    FOR(i, route.size()-1) {
        pos1 = route[i];
        pos2 = route[i+1];

        pos1 -= 1;
        pos2 -= 1;

        cost += matrix[pos1][pos2];
    }

    pos1 = route[route.size()-1];
    pos1 -= 1;

    cost += matrix[pos1][0];

    return cost;
}

int main(int argc, char const *argv[]) {
    FILE * unused __attribute__((unused));
	unused = freopen (argv[1], "r", stdin);

    printf("Instance: %s\n", argv[1]);

    int N;
    cin >> N;

    vector<vector<int>> matrix(N, vector<int>(N));

    FOR(i, N) {
        FOR(j, N) {
            int aux;
            cin >> aux;
            matrix[i][j] = aux;
        }
    }

    vector<int> route(N);

    FOR(i, N) {
        int aux;
        cin >> aux;
        route[i] = aux;
    }

    //printMatrix(matrix);
    //printRoute(route);
    
    printf("\nTSP Cost = %d\n", calculateTSPCost(route, matrix));
}