
    const sections = document.querySelectorAll('section');
    let index = 0;

    function changeSection() {
        sections[index].classList.remove('active');
        index = (index + 1) % sections.length;
        sections[index].classList.add('active');
        setInterval(changeSection, 3000);
    }

   