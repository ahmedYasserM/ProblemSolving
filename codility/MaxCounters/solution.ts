function solution(N: number, A: number[]): number[] {
  let counters = new Array(N).fill(0);
  let m = 0;
  let b = 0;

  for (let v of A) {
    if (x <= N) {
      counters[v - 1] = Math.max(b, counters[v - 1]) + 1;
      m = Math.max(m, counters[v - 1]);
    } else {
      b = m;
    }
  }

  return counters.map((v) => (v < b ? b : v));
}

console.log(solution(5, [3, 4, 4, 6, 1, 4, 4]));
