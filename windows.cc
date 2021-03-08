void mainImage( out vec4 fragColor, in vec2 fragCoord )
{
    vec2 uv = (fragCoord-.5*iResolution.xy)/iResolution.y;

    // background
    vec3 col = vec3(0);
    
    vec3 ro = vec(0);
    vec3 rd = normalize(vec3(uv.x, uv.y, 1));
    
    vec3 s = vec3(0, 0, 4);
    float r = 1.;
    
    float t = dot(s-ro, rd);
    vec3 p = ro + rd*t;
    float y = length(s-p);

    if (y<r){
        float x = sqrt(r*r - y*y);
        float t1 = t-x;
        float t2 = t+ x;
        col = vec3(1);
    }
    
    fragColor = vec4(col,1.0);
}