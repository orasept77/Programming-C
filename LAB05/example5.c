struct rectangle
{
    float x;
    float y;
};

struct rectangle createrect(float x, float y){
    struct rectangle kw;
    kw.x = x;
    kw.y = y;
    return kw;
}

int main(){
    struct rectangle kw = createrect(10.2, 20.4);
    printf("x=%f, y=%f", kw.x,kw.y);
}