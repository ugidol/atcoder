N,K = map(int, input().split());
if ( K > N ) :
    print(1);
    exit();

vec = [1] * (N+1);
sm = K;
for i in range(K,N+1) :
    vec[i] = sm;
    sm += vec[i];
    sm %= 1000000000;
    sm -= vec[i-K];
    sm %= 1000000000;
print(vec[N]);
