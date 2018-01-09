Styleguide til nyt bibliotek.kk.dk
==================================

Projektet er struktureret således:

- en index.html fil som bliver brugt til test af de forskellige css klasser, hvor man kan manipulere lidt med det.
- de 4 sider (ex_biblioteker.html, ex_forside.html, ex_materiale.html, ex_udstilling.html)
- en styleguide-template folder, som indeholder templates til styleguiden. (Du generere en ny styleguide med “grunt style” - se evt grunt filen)
- en styleguide folder, som er selve styleguiden.
- bower_components som primært er de forskellige biblioteker som er blevet brugt (biblioteker ligger også inde i styleguide-template/public/js/ så det kommer med i styleguiden) (“bower install”).
- node_modules som er til at lave styleguiden med grunt. ("npm install”)

Til at generere styleguiden brugte jeg kss og grunt, det kan installeres via grunt: "npm install -g grunt-cli” kss: "npm install -g kss” (https://github.com/hughsk/kss-node) (og man skal selvf. også have node for at bruge npm :D)
