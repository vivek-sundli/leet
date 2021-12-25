class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int area1 = (C-A) * (D-B);
        int area2 = (G-E) * (H-F);
        int overlap = 0;
        int l = max((min(C,G)-max(A,E)),0);
        int b = max((min(D,H)-max(B,F)),0);
        overlap = l*b;
        return area1+area2-overlap;
    }
};