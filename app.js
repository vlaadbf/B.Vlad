function f() {
    document.getElementsByClassName('dropdown')[0].classList.toggle('down');
    document.getElementsByClassName('arrow')[0].classList.toggle('gone');
    if (document.getElementsByClassName('dropdown')[0].classList.contains('down')) {
      setTimeout(function() {
        document.getElementsByClassName('dropdown')[0].style.overflow = 'visible'
      }, 500)
    } else {
      document.getElementsByClassName('dropdown')[0].style.overflow = 'hidden'
    }
  }


  const mainMenu = document.querySelector('.mainMenu');
  const closeMenu = document.querySelector('.closeMenu');
  const openMenu = document.querySelector('.openMenu');
  
  
  
  
  openMenu.addEventListener('click',show);
  closeMenu.addEventListener('click',close);
  
  function show(){
      mainMenu.style.display = 'flex';
      mainMenu.style.top = '0';
  }
  function close(){
      mainMenu.style.top = '-100%';
  }