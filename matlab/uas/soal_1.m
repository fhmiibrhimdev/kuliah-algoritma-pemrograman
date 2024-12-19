clc
syms t s

% Fungsi asli
f = 2*t^2 + 4*sin(t)^2;

% Transformasi Laplace
F = laplace(f, t, s);

% Penyederhanaan hasil
F_simplified = simplify(F);

% Tampilkan hasil
disp('Transformasi Laplace dari 2t^2 + 4sin^2(t) adalah:');
disp(F_simplified);
pretty(F_simplified);
