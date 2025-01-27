import Link from "next/link";
export default function Navbar() {
    return (
      <nav className="flex justify-between items-center mx-auto">
        <h1>Home</h1>
        <h2>
          <Link href="/performance" scroll={true}>Performance</Link>
          <Link href="/reliability" scroll={true}>Reliability</Link>
        </h2>
      </nav>
    );
  }