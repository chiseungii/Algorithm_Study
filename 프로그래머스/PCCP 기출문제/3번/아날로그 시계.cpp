#include <string>
#include <vector>

using namespace std;

int solution(int h1, int m1, int s1, int h2, int m2, int s2) {
    // 처음과 끝 시각 초로 바꾸기
    int start = 3600*h1 + 60*m1 + s1;
    int end = 3600*h2 + 60*m2 + s2;
    
    int cnt = 0;
    // 처음부터 끝까지 1초마다 겹치는지 확인
    for(int i=start; i<=end; i++){
        // 현재 시, 분, 초
        int h = (i/3600)%12;
        int m = (i%3600)/60;
        int s = i%60;
        
        // 현재 각도 계산
        double h_degree = (double)h*30. + (double)m*0.5 + (double)s/120.;
        double m_degree = (double)m*6. + (double)s*0.1;
        double s_degree = (double)s*6.;
        
        // 딱 겹치면 +1
        if(s_degree==h_degree || s_degree==m_degree) cnt++;
        else{
        
            if(i == start) continue;
        
            // 1초 전 시, 분, 초
             int h_before = ((i-1)/3600)%12;
            int m_before = ((i-1)%3600)/60;
            int s_before = (i-1)%60;
        
            // 1초 전 각도 계산
            double h_before_degree = (double)h_before*30. + (double)m_before*0.5 + (double)s_before/120.;
            double m_before_degree = (double)m_before*6. + (double)s_before*0.1;
            double s_before_degree = (double)s_before*6.;
        
            // 1초 전보다 분이 바뀌었을 때
            if(m_before != m)
                s_degree = 360.;
            // 1초 전보다 시간이 바뀌었을 때
            else if(h_before != h)
                m_degree = s_degree = 360.;
        
            // 1초 전과 비교해서 1초 미만으로 겹치면 +1
            if(s_before_degree<h_before_degree && s_degree>h_degree) cnt++;
            if(s_before_degree<m_before_degree && s_degree>m_degree) cnt++;
        }
    }
    
    return cnt;
}
