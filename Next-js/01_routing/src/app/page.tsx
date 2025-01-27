import Image from 'next/image';
import Navbar from '../components/header';

export default function Home() {
  return (
    <div className="bold">
      Amoung us
      <Image 
          src="/image1.jpg" 
          alt="Amoung Us Image" 
          width={2000} 
          height={1000} 
          objectFit="cover" 
          layout="fixed" 
        />
    </div>
  );
}